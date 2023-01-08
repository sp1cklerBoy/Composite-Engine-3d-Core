





#include <time.h>

namespace CompositeEngineCoreUtills
{
	class DateTime
	{
	private:
		time_t t;
		char* end_time;
	public:
		char* GetFullDate();
	};
}