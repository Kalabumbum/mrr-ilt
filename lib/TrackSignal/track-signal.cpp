#include "track-signal.hpp"

TrackSignal::TrackSignal(/* lid_t lid */)
	: TrackObject(SIGNAL)
{
}

TrackSignal::state_t TrackSignal::get_state(void)
{
	return m_state;
}
