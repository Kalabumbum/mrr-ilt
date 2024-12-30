#ifndef ID_HPP
#define ID_HPP

#include "includes.hpp"

class Id
{
	id_t m_id;
	static id_t s_counter;
public:
	Id(id_t = 0);
	id_t get_id(void);
};

#endif // ID_HPP

id_t Id::s_counter = 0;

Id::Id(id_t id)
	: m_id(id == 0 ? ++s_counter : id)
{
	if (m_id > s_counter)
		s_counter = m_id;
}

inline id_t Id::get_id(void)
{
	return m_id;
}
