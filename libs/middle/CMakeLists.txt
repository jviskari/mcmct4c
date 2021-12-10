project(middle C)

add_library(${PROJECT_NAME}
    src/middle.c
)

add_library(libs::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

target_include_directories(${PROJECT_NAME}
	PUBLIC
		inc
)

target_link_libraries(${PROJECT_NAME} PRIVATE inner INTERFACE inner)

target_compile_features(${PROJECT_NAME}
    PRIVATE
    c_std_99
)

