/*
 * FindFeaMemManager.h
 *
 *  Created on: 16 Jul 2016
 *      Author: Zeyi Wen
 *		@brief: 
 */

#ifndef FINDFEAMEMMANAGER_H_
#define FINDFEAMEMMANAGER_H_

#include "../../DeviceHost/DefineConst.h"

class FFMemManager
{
public:
	//memory for the tree
	static float_point *m_pGDPrefixSum_d;
	static float_point *m_pHessPrefixSum_d;
	static float_point *m_pfGlobalBestFea_d;
	static int *m_pnGlobalBestKey_d;
	static float_point *m_pfBlockBestFea_d;
	static int *m_pnBlockBestKey_d;
	static float_point *m_pGDOnEachFeaValue_d;
	static float_point *m_pHessOnEachFeaValue_d;
	static float_point *m_pValueOnEachFeaValue_d;
	static int *m_pStartPosEachFeaInBatch_d;
	static int *m_pFeaLenInBatch_d;
	static float_point *m_pGainOnEachFeaValue_d;
	static float_point *m_pfFeaLocalBestGain_d;
	static int *m_pnFeaLocalBestGainKey_d;
	static float_point *m_pfFeaGlobalBestGain_d;
	static int *m_pnFeaGlobalBestGainKey_d;
	static float_point *m_pLastBiggerValue_d;
	static int *m_pnEachFeaLen_h;

	static int maxNumofSNodeInFF;

	//for dense array
	static float_point *pGDEachFeaValue, *pHessEachFeaValue, *pDenseFeaValue;
	static float_point *pGDPrefixSum, *pHessPrefixSum;
	static float_point *pGainEachFeaValue;
	static int m_totalNumFeaValue;
	static float_point *pfLocalBestGain_d;
	static int *pnLocalBestGainKey_d;
	static float_point *pfGlobalBestGain_d;
	static int *pnGlobalBestGainKey_d;

private:
	static long long m_totalEleInWholeBatch;

public:
	int getMaxNumofSN(int numofValuesInABatch, int maxNumofNode);
	void allocMemForFindFea(int numofValuesInABatch, int maxNumofValuePerFea, int maxNumofFea);

	void resetMemForFindFea();
	void freeMemForFindFea();
};



#endif /* FINDFEAMEMMANAGER_H_ */
