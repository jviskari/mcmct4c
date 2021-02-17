project(app_test C)

#test 1
add_executable(${PROJECT_NAME}_1
    app_test.c
)

target_link_libraries(${PROJECT_NAME}_1
    PRIVATE
        libs::bar
        libs::foo
)

#define test case TC_1...TC_n

target_compile_definitions(${PROJECT_NAME}_1 PRIVATE TC_1)

add_test(app_tests ${PROJECT_NAME}_1)

