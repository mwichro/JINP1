
set(_target ${TARGET}_test)

file(GLOB _source_tests *.cc)


	SET(_exe "${_target}${${_build_type}}")
	MESSAGE("-- Configuring executable ${_exe}")
	ADD_EXECUTABLE(${_exe} ${_source_tests})
	TARGET_LINK_LIBRARIES(${_exe} ${TEST_LIBRARIES_${_BUILD_TYPE}} ${GTEST_LIBRARY} pthread)

