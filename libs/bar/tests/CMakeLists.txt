project(bar_test C)

#test 1
add_executable(${PROJECT_NAME}_1
    bar_test.c
)

target_link_libraries(${PROJECT_NAME}_1
    PRIVATE
        libs::bar
)

add_test(bar_tests ${PROJECT_NAME}_1)

