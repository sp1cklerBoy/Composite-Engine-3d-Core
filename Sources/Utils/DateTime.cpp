





#include <Utils/DateTime.hpp>

char * CompositeEngineCoreUtills::DateTime::GetFullDate()
{
	time(&t);

	end_time = ctime(&t);

	return end_time;
}