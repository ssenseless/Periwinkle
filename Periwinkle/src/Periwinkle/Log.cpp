#include "Log.h"
#include "spdlog/sinks/stdout_color_sinks.h"

namespace Periwinkle {

	std::shared_ptr<spdlog::logger> Log::s_core_logger,
									Log::s_client_logger;

	void Log::init() {
		spdlog::set_pattern("%^[%T] %n: %v%$");
		
		s_core_logger = spdlog::stdout_color_mt("PERIWINKLE");
		s_core_logger->set_level(spdlog::level::trace);
		
		s_client_logger = spdlog::stdout_color_mt("CLIENT");
		s_client_logger->set_level(spdlog::level::trace);
	}
	
}