#pragma once

#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"

namespace Periwinkle {
	class PERIWINKLE_API Log {
	public:
		static void init();

		inline static std::shared_ptr<spdlog::logger>& get_core_logger() { return s_core_logger; }
		inline static std::shared_ptr<spdlog::logger>& get_client_logger() { return s_client_logger; }

	private:
		static std::shared_ptr<spdlog::logger> s_core_logger;
		static std::shared_ptr<spdlog::logger> s_client_logger;
	};

}

//core log macros
#define PW_CORE_TRACE(...) ::Periwinkle::Log::get_core_logger()->trace(__VA_ARGS__)
#define PW_CORE_INFO(...) ::Periwinkle::Log::get_core_logger()->info(__VA_ARGS__)
#define PW_CORE_WARN(...) ::Periwinkle::Log::get_core_logger()->warn(__VA_ARGS__)
#define PW_CORE_ERROR(...) ::Periwinkle::Log::get_core_logger()->error(__VA_ARGS__)
#define PW_CORE_CRITICAL(...) ::Periwinkle::Log::get_core_logger()->critical(__VA_ARGS__)

//client log macros
#define PW_TRACE(...) ::Periwinkle::Log::get_client_logger()->trace(__VA_ARGS__)
#define PW_INFO(...) ::Periwinkle::Log::get_client_logger()->info(__VA_ARGS__)
#define PW_WARN(...) ::Periwinkle::Log::get_client_logger()->warn(__VA_ARGS__)
#define PW_ERROR(...) ::Periwinkle::Log::get_client_logger()->error(__VA_ARGS__)
#define PW_CRITICAL(...) ::Periwinkle::Log::get_client_logger()->critical(__VA_ARGS__)