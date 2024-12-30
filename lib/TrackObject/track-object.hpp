#pragma once
// class TrackObject;

#include "id.hpp"
#include "track-path.hpp"

class TrackObject : Id
{
	public:
	using owner_t = TrackPath *;
	typedef enum : uint8_t { NONE, SIGNAL, SENSOR, TURNOUT } Type;
	inline TrackObject::Type get_type(void);

	inline bool set_owner(owner_t);
	inline owner_t get_owner(void);
	inline bool has_owner(void);
	inline bool is_owner(owner_t);
	inline bool clear_owner(owner_t);

	private:
	TrackObject::Type m_type;

	TrackPath *m_owner = nullptr;

	// protected:
	public:
	TrackObject(id_t, Type = NONE);
};
