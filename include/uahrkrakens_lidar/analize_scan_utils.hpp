
#include "polar.hpp"

#ifndef ANALIZE_SCAN_UTILS_HPP
#define ANALIZE_SCAN_UTILS_HPP

    void laser_scan_to_polarv(const std::vector<float> &ranges, const float &delta_angle, std::vector<polar> &polar_vector);
    void get_clusters(std::vector<polar> &scan, std::vector<cluster> &clusters, float &range_edge, float &angle_edge);

#endif
