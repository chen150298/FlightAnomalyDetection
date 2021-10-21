#ifndef HYBRIDANOMALYDETECTOR_H_
#define HYBRIDANOMALYDETECTOR_H_

#include "SimpleAnomalyDetector.h"

class HybridAnomalyDetector: public SimpleAnomalyDetector {
public:
	HybridAnomalyDetector();
	virtual ~HybridAnomalyDetector();

    void learnNormal(const TimeSeries& ts) override;
    vector<AnomalyReport> detect(const TimeSeries& ts);

    bool is_corrlate(float val) override;
    void setDetectors(correlatedFeatures *correlatedFeatures, vector<Point *> points, int size) override;
    vector<pair<pair<string, string>, float>> FindCorllations(const TimeSeries &ts) override;
    bool checkOffset(Point point, int index) override;
};

#endif /* HYBRIDANOMALYDETECTOR_H_ */
