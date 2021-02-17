project(foo_test C)

#test 1
add_executable(${PROJECT_NAME}_1
    foo_test_1.c
)

target_link_libraries(${PROJECT_NAME}_1
    PRIVATE
        libs::foo
)

add_test(foo_tests ${PROJECT_NAME}_1)

#test 2
add_executable(${PROJECT_NAME}_2
    foo_test_2.c
)

target_link_libraries(${PROJECT_NAME}_2
    PRIVATE
        libs::foo
)

add_test(foo_tests ${PROJECT_NAME}_2)