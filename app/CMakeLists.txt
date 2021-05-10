project(app C)

add_executable(${PROJECT_NAME}
    main.c
)

target_link_libraries(${PROJECT_NAME}
    PRIVATE
        myinterface::meta
)

if(BUILD_TESTING)
    add_subdirectory(tests)
endif()