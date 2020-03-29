# Creates a library target called iort_common
# this can be used as a dependency by other targets,
# as you'll see in maths
# the lines after the iort_common are all the files that are used
# in this library
add_library(iort_common
            rtHeaderMain.h
            rtHeaderMain.cpp)

# Make it so that anybody who depends on this library gets
# the include path <Common> added to their include path
# the first argument is the target we're modifying
# the PUBLIC means we're modifying the public include paths,
# that is, the include paths that are inherited by any downstream
# target that depends on iort_common
target_include_directories(iort_common
                           PUBLIC
                           "${iort_SOURCE_DIR}/Common")

# This declares any dependencies that iort_common has.
# This will be propagated to any target that depends on iort_common
# As it is, we don't have any, but you could imagine
# depending on boost, for example, or Threads
target_link_libraries(iort_common
                      PUBLIC
                      Threads::Threads)

