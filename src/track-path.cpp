#include "track-path.hpp"

// TrackPath::TrackPath(lid_t lid, TrackSignal *signal, const std::vector<TrackPathObject *> &track_objects)
// 	: linked_list(lid), m_signal(signal), m_track_objects(track_objects)
// {
// 	if (get_lid() > s_counter)
// 		s_counter = get_lid();
// }

// TrackPath::TrackPath(TrackSignal *signal, const std::vector<TrackPathObject *> &track_objects)
// 	: TrackPath(++s_counter, signal, track_objects)
// {
// }

TrackPath::TrackPath(TrackSignal *signal, const std::vector<TrackPathObject *> &track_objects)
	// : TrackPath(signal, track_objects)
	: m_signal(signal), m_track_objects(track_objects)
{
}
