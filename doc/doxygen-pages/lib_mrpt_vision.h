/* +---------------------------------------------------------------------------+
   |                     Mobile Robot Programming Toolkit (MRPT)               |
   |                          https://www.mrpt.org/                            |
   |                                                                           |
   | Copyright (c) 2005-2020, Individual contributors, see AUTHORS file        |
   | See: https://www.mrpt.org/Authors - All rights reserved.                  |
   | Released under BSD License. See details in https://www.mrpt.org/License   |
   +---------------------------------------------------------------------------+
 */

/** \defgroup mrpt_vision_grp [mrpt-vision]

Computer vision algorithms

<small> <a href="index.html#libs">Back to list of all libraries</a> | <a
href="modules.html" >See all modules</a> </small> <br>

[TOC]

# Library `mrpt-vision`
<small> [New in MRPT 2.0.0] </small>

This library is part of MRPT but has no dependencies, so it can be installed
in Debian-based systems with:

		sudo apt install libmrpt-vision-dev

See: \ref mrpt_from_cmake

This library includes some extensions to OpenCV functionality, plus some
original classes:

- The namespace mrpt::vision::pinhole contains several projection and Jacobian
auxiliary functions for projective cameras.

- Sparse Bundle Adjustment algorithms. See \ref mrpt_vision_lgpl_grp

- A versatile feature tracker. See mrpt::vision::CGenericFeatureTracker and the
implementation mrpt::vision::CFeatureTracker_KL

- mrpt::vision::CFeature: A generic representation of a visual feature, with or
without patch, with or without a set of descriptors.

- mrpt::vision::CFeatureExtraction: A hub for a number of detection algorithms
and different descriptors.

- mrpt::vision::TSIFTDescriptorsKDTreeIndex,
mrpt::vision::find_descriptor_pairings() and others: KD-tree-based SIFT/SURF
feature matching.

- mrpt::vision::CVideoFileWriter: A class to write video files.

- mrpt::vision::CUndistortMap: A cache of the map for undistorting image, very
efficient for sequences of images all with the same distortion parameters.

- This library defines a new type of observation
(mrpt::obs::CObservationVisualLandmarks) and a new type of map
(mrpt::maps::CLandmarksMap).

- Notice that sets of parameters for monocular and stereo cameras are defined in
\ref grp_mrpt_img for convenience, in the classes:
	- mrpt::img::TCamera
	- mrpt::img::TStereoCamera

- mrpt::vision::CDifodo: A class which implements a Visual Odometry algorithm
based on depth images and the "range flow constraint equation".

See all the classes in mrpt::vision


*/
