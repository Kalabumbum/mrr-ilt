#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <stdint.h>

using lid_t = uint16_t;

template <class C, typename LID = lid_t>
class linked_list
{
private:
    static C *s_first;

    LID m_id;
    C *m_next;

protected:
    static inline void Add(C *ptr)
    {
        ptr->m_next = linked_list<C, LID>::s_first;
        linked_list<C, LID>::s_first = ptr;
    }
    static inline bool Remove(C *ptr)
    {
        C *cur = linked_list<C, LID>::s_first, *past = nullptr;
        for (; cur != nullptr && cur != ptr; past = cur, cur = cur->m_next)
            ;
        if (cur == nullptr)
            return false;
        if (ptr == s_first)
            linked_list<C, LID>::s_first = ptr->m_next;
        else
            past->m_next = ptr->m_next;
        return true;
    }
    linked_list<C, LID>(LID lid)
        : m_id(lid), m_next(linked_list<C, LID>::s_first)
    {
        linked_list<C, LID>::s_first = static_cast<C *>(this);
    }

public:
    static inline C *First(void) { return linked_list<C, LID>::s_first; }
    static inline C *Get(LID lid)
    {
        for (C *ptr = linked_list<C, LID>::s_first; ptr; ptr = ptr->m_next)
            if (ptr->m_id == lid)
                return ptr;
        return nullptr;
    }
    static inline bool Exists(LID lid) { return Get(lid) != nullptr; }
    static inline LID Count(void)
    {
        LID i = 0;
        for (C *cur = linked_list<C, LID>::s_first; cur != nullptr; cur = cur->m_next, i++);           ;
        return i;
    }

    inline C *next(void) const { return this->m_next; }
    LID get_lid(void) const { return m_id; }
    virtual ~linked_list<C, LID>(void) { linked_list<C, LID>::Remove(static_cast<C *>(this)); }
};
template <class C, typename LID>
C *linked_list<C, LID>::s_first = nullptr;
#endif