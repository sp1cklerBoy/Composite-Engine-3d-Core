





#include <string>


class File
{
public:
	static bool CreateNew(const char *f_path, bool ReadOnly=false);
	static bool Remove(const char *f_path);
	static bool Replace(const char *current_location, const char *target_location);
	static bool Rename(const char* f_path, const char* target_name);
	static std :: string ReadFromFile();
};
