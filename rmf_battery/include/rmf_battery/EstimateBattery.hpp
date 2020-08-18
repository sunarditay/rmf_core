/*
 * Copyright (C) 2020 Open Source Robotics Foundation
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
*/

#ifndef RMF_BATTERY__ESTIMATEBATTERY_HPP
#define RMF_BATTERY__ESTIMATEBATTERY_HPP

#include <rmf_battery/agv/SystemTraits.hpp>

#include <rmf_traffic/Trajectory.hpp>


namespace rmf_battery {


//==============================================================================
class EstimateBattery
{
public:


  /// Computes state-of-charge estimate of battery at the end of a trajectory.
  ///
  /// \return The fraction of remaining charge at the end of the trajectory.
  virtual double compute_state_of_charge(
    const rmf_traffic::Trajectory& trajectory,
    const double initial_soc) const = 0;

};

} // namespace rmf_traffic

#endif // RMF_BATTERY__ESTIMATEBATTERY_HPP