# Creates an executable target called iort_raytracer
# that depends on the two libraries we've built
add_executable(iort_raytracer
               main.cpp)

# For the sake of illustration, we only depend on iort_maths here
# and let the iort_common dependency be pulled in as a transitive
# dependency.
target_link_libraries(iort_raytracer
                      PUBLIC
                      iort_maths)



