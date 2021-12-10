project(outer C)

add_library(${PROJECT_NAME}
    src/outer.c
)

add_library(libs::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

target_include_directories(${PROJECT_NAME}
	PUBLIC
		$<INSTALL_INTERFACE:inc>
		$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/inc>
)

target_link_libraries(${PROJECT_NAME} PUBLIC middle )

target_compile_features(${PROJECT_NAME}
    PRIVATE
    c_std_99
)

