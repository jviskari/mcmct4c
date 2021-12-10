project(inner C)

add_library(${PROJECT_NAME}
    src/inner.c
)

add_library(libs::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

target_include_directories(${PROJECT_NAME}
	PRIVATE
		inc
    INTERFACE
        inc
)

target_compile_features(${PROJECT_NAME}
    PRIVATE
    c_std_99
)

