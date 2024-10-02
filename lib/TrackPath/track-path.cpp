#include "track-path.hpp"


TrackPathObjectSignal::TrackPathObjectSignal(TrackSignal *signal, TrackSignal::state_t state)
	: m_signal(signal), m_state(state)
{
}

bool TrackPathObjectSignal::check()
{
	return m_state == m_signal->get_state();
}

TrackPath::TrackPath(TrackSignal *signal, const std::vector<TrackPathObject *> &track_objects)
	: m_signal(signal), m_track_objects(track_objects)
{
}
