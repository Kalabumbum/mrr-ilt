
class DeviceBinary
{
public:
	virtual bool set(bool) = 0;
};

using devbin_t = DeviceBinary *;
