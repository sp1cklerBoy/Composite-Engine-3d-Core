





namespace CompositeEngineCore
{
	namespace Platform {
		
		namespace Specs
		{
			class OS
			{
			public:
				static const char* getCurrentOS();
			};

			class Video
			{
			public:
				auto GetOpenGLVersion();
			};
		}
	}
}