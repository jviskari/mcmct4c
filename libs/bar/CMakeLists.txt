project(bar C)

add_library(${PROJECT_NAME}
    src/bar_interface.c
	src/bar_internal.c
)

add_library(libs::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

target_include_directories(${PROJECT_NAME}
	PUBLIC
		$<INSTALL_INTERFACE:inc>
		$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/inc>
	PRIVATE
		${CMAKE_CURRENT_SOURCE_DIR}/src
)

target_compile_features(${PROJECT_NAME}
    PRIVATE
    c_std_99
)

if(BUILD_TESTING)
    add_subdirectory(tests)
endif()