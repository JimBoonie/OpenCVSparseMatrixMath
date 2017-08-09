/********************************************************************
Copyright:  BICI2
Created:    **:**:**** **:**
Filename:   opencvsparsematrixmath.h
Author:     Mason McGough

Purpose:    MuscleMiner implementation
*********************************************************************/

#ifndef OPENCVSPARSEMATRIXMATH_H_
#define OPENCVSPARSEMATRIXMATH_H_

#include <vector>
#include "Export.h"
#include "opencv2/opencv.hpp"
#include "opencv2/highgui.hpp"

namespace bici2 {

	void TestOpenCV_EXPORT SumSparseMatRows(const cv::SparseMat& sparse_matrix, cv::SparseMat& output);
	void TestOpenCV_EXPORT SparseVectorMatrixMultiply(const cv::SparseMat& vector, const cv::SparseMat& sparse_matrix, cv::SparseMat& output);
	float TestOpenCV_EXPORT SparseVectorDotProduct(const cv::SparseMat& vector1, const cv::SparseMat& vector2);
	void TestOpenCV_EXPORT AddDiagonalToSparseMat(const cv::SparseMat& sparse_matrix, const cv::SparseMat& sparse_diag, cv::SparseMat& output);
	void TestOpenCV_EXPORT NegativeSparseMat(const cv::SparseMat& sparse_matrix, cv::SparseMat& output);
	void TestOpenCV_EXPORT _CheckSparseMat(const cv::SparseMat& sparse_matrix);
}

#endif 