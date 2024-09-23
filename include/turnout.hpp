#pragma once

#include "linked-list.hpp"
#include "track-object.hpp"

class Turnout : public TrackObject, public linked_list<Turnout>
{
};