#include "track-signal.hpp"

TrackSignal::TrackSignal(lid_t lid)
	: TrackObject(SIGNAL), linked_list<TrackSignal>(lid)
{
}

// TrackSignal::TrackSignal(lid_t lid)
// 	: linked_list<TrackSignal>(lid)
// {
// }

// TrackSignal::TrackSignal(lid_t lid)
// 	: TrackObject(SENSOR)
// {
// }