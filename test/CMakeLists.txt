include(${PROJECT_SOURCE_DIR}/cmake/gtest.cmake)

function(OPTION_TURN_ON_TESTING 
            CONDITION 
            NO_TESTING_MESSAGE
            TEST_NAME 
            TEST_SOURCE 
            LIB_SOURCE 
            EXEC_TARGET_NAME
) # {
    if (NOT ${CONDITION})
        message(${NO_TESTING_MESSAGE})
    else()
        add_executable(${TEST_NAME} ${TEST_SOURCE})
        target_link_libraries(${TEST_NAME} 
            PRIVATE 
                ${LIB_SOURCE}
                GTest::GTest)
            target_compile_features(${TEST_NAME} PRIVATE cxx_std_20)
        add_custom_target(${EXEC_TARGET_NAME} ALL COMMAND ${TEST_NAME})
    endif()  
# }   
endfunction()

option(GTEST_DISABLE_PTHREADS "" OFF)

option(TEST_FLAT_VECTOR "" OFF)

option (TEST_QUADRILATERAL "" ON)

OPTION_TURN_ON_TESTING(
    TEST_FLAT_VECTOR
    "Тестирование quadrilateral отключено\n"
    quad-utest 
    quad_test.cpp 
    figure::headers
    checkFigure
)

OPTION_TURN_ON_TESTING(
    TEST_QUADRILATERAL
    "Тестирование quadrilateral отключено\n"
    quad-utest 
    quad_test.cpp 
    figure::headers
    checkFigure
)

