add_executable(ecstest
    main.h
    main.cpp)
include_directories(../../components/ecs/includes ../../components/ecs)
set_target_properties(ecstest PROPERTIES COMPILE_FLAGS "${FA_COMPILER_FLAGS}")
