#include "turnout.hpp"

inline dir_t Turnout::get_dir(void)
{
	return m_dir;
}

inline bool Turnout::set_dir(dir_t dir)
{
	set_dir(nullptr, dir);
}

inline bool Turnout::set_dir(owner_t owner, dir_t dir)
{
	if (owner != get_owner())
		return false;
	if (dir == m_dir)
		return true;
	switch (dir)
	{
	case DIRECTION::LEFT:
	case DIRECTION::RIGHT:
		if (dir != m_diverge)
			return false;
		m_dev->set(true);
		break;
	case DIRECTION::FORWARD:
		m_dev->set(false);
		break;
	default:
		return false;
	}
	m_dir = dir;
	return true;
}

inline bool Turnout::validate(dir_t dir)
{
	return (dir == FORWARD || dir == m_diverge);
}

Turnout::Turnout(devbin_t device, dir_t diverge)
	: TrackObject(TURNOUT), m_dev(device), m_diverge(diverge == DIRECTION::LEFT || diverge == DIRECTION::RIGHT ? diverge : DIRECTION::NONE)
{
}
