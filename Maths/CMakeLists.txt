# Creates a library target called iort_maths
# this can be used as a dependency by other targets,
# the lines after the iort_maths are all the files that are used
# in this library
add_library(iort_maths
            rtMath.h
            rtMath.cpp)

# Make it so that anybody who depends on this library gets
# the include path <Maths> added to their include path
# the first argument is the target we're modifying
# the PUBLIC means we're modifying the public include paths,
# that is, the include paths that are inherited by any downstream
# target that depends on iort_maths
target_include_directories(iort_maths
                           PUBLIC
                           "${iort_SOURCE_DIR}/Maths")

# This declares any dependencies that iort_maths has.
# This will be propagated to any target that depends on iort_maths
# By depending on the target iort_common, we also get that target's
# linker dependencies AND its include paths, automagically.
target_link_libraries(iort_maths
                      PUBLIC
                      iort_common)


