#include "track-signal.hpp"

TrackSignal::TrackSignal(/* lid_t lid */)
	: TrackObject(SIGNAL)
{
}

TrackSignal::state_t TrackSignal::get_state(void)
{
	return m_state;
}

inline bool TrackSignal::set_state(state_t)
{
	return false;
}
