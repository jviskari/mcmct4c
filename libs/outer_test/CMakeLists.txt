project(outer_test C)

add_executable(${PROJECT_NAME}
    src/main.c
)

target_link_libraries(${PROJECT_NAME} PRIVATE outer)

target_compile_features(${PROJECT_NAME}
    PRIVATE
    c_std_99
)

