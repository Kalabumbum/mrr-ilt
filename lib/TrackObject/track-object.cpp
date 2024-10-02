#include "track-object.hpp"

inline TrackObject::Type TrackObject::get_type(void)
{
	return m_type;
}

inline bool TrackObject::set_owner(owner_t owner)
{
	if (m_owner != nullptr or owner == nullptr)
		return false;
	m_owner = owner;
	return true;
}

inline TrackObject::owner_t TrackObject::get_owner(void)
{
	return m_owner;
}

inline bool TrackObject::has_owner(void)
{
	return m_owner != nullptr;
}

inline bool TrackObject::clear_owner(owner_t owner)
{
	if (m_owner == nullptr || m_owner != owner)
		return false;
	m_owner = nullptr;
	return true;
}

TrackObject::TrackObject(Type type)
	: m_type(type)
{
}
