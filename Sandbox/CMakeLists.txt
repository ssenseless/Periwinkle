add_executable(Sandbox src/SandboxApp.cpp)

target_include_directories(Sandbox PUBLIC ../Periwinkle/src/ PUBLIC ../Periwinkle/extern)

target_link_libraries(Sandbox PUBLIC Periwinkle)