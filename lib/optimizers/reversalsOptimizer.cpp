#include "optimizers/reversalsOptimizer.h"

std::vector<Study*> ReversalsOptimizer::getStudies() {
    if (this->studies.size() > 0) {
        // Studies have already been prepared.
        return this->studies;
    }

    this->studies.push_back(new SmaStudy({{"length", 13.0}}, {{"sma", "sma13"}}));
    this->studies.push_back(new EmaStudy({{"length", 50.0}}, {{"ema", "ema50"}}));
    this->studies.push_back(new EmaStudy({{"length", 100.0}}, {{"ema", "ema100"}}));
    this->studies.push_back(new EmaStudy({{"length", 200.0}}, {{"ema", "ema200"}}));

    // TODO: Definitely try these too.
    // this->studies.push_back(new EmaStudy({{"length", 250.0}}, {{"ema", "ema250"}}));
    // this->studies.push_back(new EmaStudy({{"length", 300.0}}, {{"ema", "ema300"}}));
    // this->studies.push_back(new EmaStudy({{"length", 350.0}}, {{"ema", "ema350"}}));
    // this->studies.push_back(new EmaStudy({{"length", 400.0}}, {{"ema", "ema400"}}));
    // this->studies.push_back(new EmaStudy({{"length", 450.0}}, {{"ema", "ema450"}}));
    // this->studies.push_back(new EmaStudy({{"length", 500.0}}, {{"ema", "ema500"}}));

    this->studies.push_back(new RsiStudy({{"length", 2.0}}, {{"rsi", "rsi2"}}));
    this->studies.push_back(new RsiStudy({{"length", 5.0}}, {{"rsi", "rsi5"}}));
    this->studies.push_back(new RsiStudy({{"length", 7.0}}, {{"rsi", "rsi7"}}));
    this->studies.push_back(new RsiStudy({{"length", 9.0}}, {{"rsi", "rsi9"}}));
    this->studies.push_back(new RsiStudy({{"length", 14.0}}, {{"rsi", "rsi14"}}));

    // TODO: Finish this study.
    // this->studies.push_back(new StochasticOscillatorStudy({{"length", 5.0}, {"averageLength", 3.0}}, {{"K", "stochastic5K"}, {"D", "stochastic5D"}}));
    // this->studies.push_back(new StochasticOscillatorStudy({{"length", 10.0}, {"averageLength", 3.0}}, {{"K", "stochastic10K"}, {"D", "stochastic10D"}}));
    // this->studies.push_back(new StochasticOscillatorStudy({{"length", 14.0}, {"averageLength", 3.0}}, {{"K", "stochastic14K"}, {"D", "stochastic14D"}}));
    // this->studies.push_back(new StochasticOscillatorStudy({{"length", 21.0}, {"averageLength", 3.0}}, {{"K", "stochastic21K"}, {"D", "stochastic21D"}}));

    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 100.0}, {"degree", 2.0}, {"deviations", 1.90}}, {{"regression", "prChannel100_2_1.90"}, {"upper", "prChannelUpper100_2_1.90"}, {"lower", "prChannelLower100_2_1.90"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 100.0}, {"degree", 2.0}, {"deviations", 1.95}}, {{"regression", "prChannel100_2_1.95"}, {"upper", "prChannelUpper100_2_1.95"}, {"lower", "prChannelLower100_2_1.95"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 100.0}, {"degree", 2.0}, {"deviations", 2.00}}, {{"regression", "prChannel100_2_2.00"}, {"upper", "prChannelUpper100_2_2.00"}, {"lower", "prChannelLower100_2_2.00"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 100.0}, {"degree", 2.0}, {"deviations", 2.05}}, {{"regression", "prChannel100_2_2.05"}, {"upper", "prChannelUpper100_2_2.05"}, {"lower", "prChannelLower100_2_2.05"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 100.0}, {"degree", 2.0}, {"deviations", 2.10}}, {{"regression", "prChannel100_2_2.10"}, {"upper", "prChannelUpper100_2_2.10"}, {"lower", "prChannelLower100_2_2.10"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 100.0}, {"degree", 2.0}, {"deviations", 2.15}}, {{"regression", "prChannel100_2_2.15"}, {"upper", "prChannelUpper100_2_2.15"}, {"lower", "prChannelLower100_2_2.15"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 100.0}, {"degree", 3.0}, {"deviations", 1.90}}, {{"regression", "prChannel100_3_1.90"}, {"upper", "prChannelUpper100_3_1.90"}, {"lower", "prChannelLower100_3_1.90"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 100.0}, {"degree", 3.0}, {"deviations", 1.95}}, {{"regression", "prChannel100_3_1.95"}, {"upper", "prChannelUpper100_3_1.95"}, {"lower", "prChannelLower100_3_1.95"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 100.0}, {"degree", 3.0}, {"deviations", 2.00}}, {{"regression", "prChannel100_3_2.00"}, {"upper", "prChannelUpper100_3_2.00"}, {"lower", "prChannelLower100_3_2.00"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 100.0}, {"degree", 3.0}, {"deviations", 2.05}}, {{"regression", "prChannel100_3_2.05"}, {"upper", "prChannelUpper100_3_2.05"}, {"lower", "prChannelLower100_3_2.05"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 100.0}, {"degree", 3.0}, {"deviations", 2.10}}, {{"regression", "prChannel100_3_2.10"}, {"upper", "prChannelUpper100_3_2.10"}, {"lower", "prChannelLower100_3_2.10"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 100.0}, {"degree", 3.0}, {"deviations", 2.15}}, {{"regression", "prChannel100_3_2.15"}, {"upper", "prChannelUpper100_3_2.15"}, {"lower", "prChannelLower100_3_2.15"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 100.0}, {"degree", 4.0}, {"deviations", 1.90}}, {{"regression", "prChannel100_4_1.90"}, {"upper", "prChannelUpper100_4_1.90"}, {"lower", "prChannelLower100_4_1.90"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 100.0}, {"degree", 4.0}, {"deviations", 1.95}}, {{"regression", "prChannel100_4_1.95"}, {"upper", "prChannelUpper100_4_1.95"}, {"lower", "prChannelLower100_4_1.95"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 100.0}, {"degree", 4.0}, {"deviations", 2.00}}, {{"regression", "prChannel100_4_2.00"}, {"upper", "prChannelUpper100_4_2.00"}, {"lower", "prChannelLower100_4_2.00"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 100.0}, {"degree", 4.0}, {"deviations", 2.05}}, {{"regression", "prChannel100_4_2.05"}, {"upper", "prChannelUpper100_4_2.05"}, {"lower", "prChannelLower100_4_2.05"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 100.0}, {"degree", 4.0}, {"deviations", 2.10}}, {{"regression", "prChannel100_4_2.10"}, {"upper", "prChannelUpper100_4_2.10"}, {"lower", "prChannelLower100_4_2.10"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 100.0}, {"degree", 4.0}, {"deviations", 2.15}}, {{"regression", "prChannel100_4_2.15"}, {"upper", "prChannelUpper100_4_2.15"}, {"lower", "prChannelLower100_4_2.15"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 100.0}, {"degree", 4.0}, {"deviations", 2.20}}, {{"regression", "prChannel100_4_2.20"}, {"upper", "prChannelUpper100_4_2.20"}, {"lower", "prChannelLower100_4_2.20"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 100.0}, {"degree", 4.0}, {"deviations", 2.25}}, {{"regression", "prChannel100_4_2.25"}, {"upper", "prChannelUpper100_4_2.25"}, {"lower", "prChannelLower100_4_2.25"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 100.0}, {"degree", 4.0}, {"deviations", 2.30}}, {{"regression", "prChannel100_4_2.30"}, {"upper", "prChannelUpper100_4_2.30"}, {"lower", "prChannelLower100_4_2.30"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 100.0}, {"degree", 4.0}, {"deviations", 2.35}}, {{"regression", "prChannel100_4_2.35"}, {"upper", "prChannelUpper100_4_2.35"}, {"lower", "prChannelLower100_4_2.35"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 100.0}, {"degree", 4.0}, {"deviations", 2.40}}, {{"regression", "prChannel100_4_2.40"}, {"upper", "prChannelUpper100_4_2.40"}, {"lower", "prChannelLower100_4_2.40"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 100.0}, {"degree", 5.0}, {"deviations", 2.05}}, {{"regression", "prChannel100_5_2.05"}, {"upper", "prChannelUpper100_5_2.05"}, {"lower", "prChannelLower100_5_2.05"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 200.0}, {"degree", 2.0}, {"deviations", 1.90}}, {{"regression", "prChannel200_2_1.90"}, {"upper", "prChannelUpper200_2_1.90"}, {"lower", "prChannelLower200_2_1.90"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 200.0}, {"degree", 2.0}, {"deviations", 1.95}}, {{"regression", "prChannel200_2_1.95"}, {"upper", "prChannelUpper200_2_1.95"}, {"lower", "prChannelLower200_2_1.95"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 200.0}, {"degree", 2.0}, {"deviations", 2.00}}, {{"regression", "prChannel200_2_2.00"}, {"upper", "prChannelUpper200_2_2.00"}, {"lower", "prChannelLower200_2_2.00"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 200.0}, {"degree", 2.0}, {"deviations", 2.05}}, {{"regression", "prChannel200_2_2.05"}, {"upper", "prChannelUpper200_2_2.05"}, {"lower", "prChannelLower200_2_2.05"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 200.0}, {"degree", 2.0}, {"deviations", 2.10}}, {{"regression", "prChannel200_2_2.10"}, {"upper", "prChannelUpper200_2_2.10"}, {"lower", "prChannelLower200_2_2.10"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 200.0}, {"degree", 2.0}, {"deviations", 2.15}}, {{"regression", "prChannel200_2_2.15"}, {"upper", "prChannelUpper200_2_2.15"}, {"lower", "prChannelLower200_2_2.15"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 200.0}, {"degree", 3.0}, {"deviations", 1.90}}, {{"regression", "prChannel200_3_1.90"}, {"upper", "prChannelUpper200_3_1.90"}, {"lower", "prChannelLower200_3_1.90"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 200.0}, {"degree", 3.0}, {"deviations", 1.95}}, {{"regression", "prChannel200_3_1.95"}, {"upper", "prChannelUpper200_3_1.95"}, {"lower", "prChannelLower200_3_1.95"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 200.0}, {"degree", 3.0}, {"deviations", 2.00}}, {{"regression", "prChannel200_3_2.00"}, {"upper", "prChannelUpper200_3_2.00"}, {"lower", "prChannelLower200_3_2.00"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 200.0}, {"degree", 3.0}, {"deviations", 2.05}}, {{"regression", "prChannel200_3_2.05"}, {"upper", "prChannelUpper200_3_2.05"}, {"lower", "prChannelLower200_3_2.05"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 200.0}, {"degree", 3.0}, {"deviations", 2.10}}, {{"regression", "prChannel200_3_2.10"}, {"upper", "prChannelUpper200_3_2.10"}, {"lower", "prChannelLower200_3_2.10"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 200.0}, {"degree", 3.0}, {"deviations", 2.15}}, {{"regression", "prChannel200_3_2.15"}, {"upper", "prChannelUpper200_3_2.15"}, {"lower", "prChannelLower200_3_2.15"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 200.0}, {"degree", 4.0}, {"deviations", 1.90}}, {{"regression", "prChannel200_4_1.90"}, {"upper", "prChannelUpper200_4_1.90"}, {"lower", "prChannelLower200_4_1.90"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 200.0}, {"degree", 4.0}, {"deviations", 1.95}}, {{"regression", "prChannel200_4_1.95"}, {"upper", "prChannelUpper200_4_1.95"}, {"lower", "prChannelLower200_4_1.95"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 200.0}, {"degree", 4.0}, {"deviations", 2.00}}, {{"regression", "prChannel200_4_2.00"}, {"upper", "prChannelUpper200_4_2.00"}, {"lower", "prChannelLower200_4_2.00"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 200.0}, {"degree", 4.0}, {"deviations", 2.05}}, {{"regression", "prChannel200_4_2.05"}, {"upper", "prChannelUpper200_4_2.05"}, {"lower", "prChannelLower200_4_2.05"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 200.0}, {"degree", 4.0}, {"deviations", 2.10}}, {{"regression", "prChannel200_4_2.10"}, {"upper", "prChannelUpper200_4_2.10"}, {"lower", "prChannelLower200_4_2.10"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 200.0}, {"degree", 4.0}, {"deviations", 2.15}}, {{"regression", "prChannel200_4_2.15"}, {"upper", "prChannelUpper200_4_2.15"}, {"lower", "prChannelLower200_4_2.15"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 200.0}, {"degree", 4.0}, {"deviations", 2.20}}, {{"regression", "prChannel200_4_2.20"}, {"upper", "prChannelUpper200_4_2.20"}, {"lower", "prChannelLower200_4_2.20"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 200.0}, {"degree", 4.0}, {"deviations", 2.25}}, {{"regression", "prChannel200_4_2.25"}, {"upper", "prChannelUpper200_4_2.25"}, {"lower", "prChannelLower200_4_2.25"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 200.0}, {"degree", 4.0}, {"deviations", 2.30}}, {{"regression", "prChannel200_4_2.30"}, {"upper", "prChannelUpper200_4_2.30"}, {"lower", "prChannelLower200_4_2.30"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 200.0}, {"degree", 4.0}, {"deviations", 2.35}}, {{"regression", "prChannel200_4_2.35"}, {"upper", "prChannelUpper200_4_2.35"}, {"lower", "prChannelLower200_4_2.35"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 200.0}, {"degree", 4.0}, {"deviations", 2.40}}, {{"regression", "prChannel200_4_2.40"}, {"upper", "prChannelUpper200_4_2.40"}, {"lower", "prChannelLower200_4_2.40"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 200.0}, {"degree", 5.0}, {"deviations", 2.05}}, {{"regression", "prChannel200_5_2.05"}, {"upper", "prChannelUpper200_5_2.05"}, {"lower", "prChannelLower200_5_2.05"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 250.0}, {"degree", 2.0}, {"deviations", 1.90}}, {{"regression", "prChannel250_2_1.90"}, {"upper", "prChannelUpper250_2_1.90"}, {"lower", "prChannelLower250_2_1.90"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 250.0}, {"degree", 2.0}, {"deviations", 1.95}}, {{"regression", "prChannel250_2_1.95"}, {"upper", "prChannelUpper250_2_1.95"}, {"lower", "prChannelLower250_2_1.95"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 250.0}, {"degree", 2.0}, {"deviations", 2.00}}, {{"regression", "prChannel250_2_2.00"}, {"upper", "prChannelUpper250_2_2.00"}, {"lower", "prChannelLower250_2_2.00"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 250.0}, {"degree", 2.0}, {"deviations", 2.05}}, {{"regression", "prChannel250_2_2.05"}, {"upper", "prChannelUpper250_2_2.05"}, {"lower", "prChannelLower250_2_2.05"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 250.0}, {"degree", 2.0}, {"deviations", 2.10}}, {{"regression", "prChannel250_2_2.10"}, {"upper", "prChannelUpper250_2_2.10"}, {"lower", "prChannelLower250_2_2.10"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 250.0}, {"degree", 2.0}, {"deviations", 2.15}}, {{"regression", "prChannel250_2_2.15"}, {"upper", "prChannelUpper250_2_2.15"}, {"lower", "prChannelLower250_2_2.15"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 250.0}, {"degree", 3.0}, {"deviations", 1.90}}, {{"regression", "prChannel250_3_1.90"}, {"upper", "prChannelUpper250_3_1.90"}, {"lower", "prChannelLower250_3_1.90"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 250.0}, {"degree", 3.0}, {"deviations", 1.95}}, {{"regression", "prChannel250_3_1.95"}, {"upper", "prChannelUpper250_3_1.95"}, {"lower", "prChannelLower250_3_1.95"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 250.0}, {"degree", 3.0}, {"deviations", 2.00}}, {{"regression", "prChannel250_3_2.00"}, {"upper", "prChannelUpper250_3_2.00"}, {"lower", "prChannelLower250_3_2.00"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 250.0}, {"degree", 3.0}, {"deviations", 2.05}}, {{"regression", "prChannel250_3_2.05"}, {"upper", "prChannelUpper250_3_2.05"}, {"lower", "prChannelLower250_3_2.05"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 250.0}, {"degree", 3.0}, {"deviations", 2.10}}, {{"regression", "prChannel250_3_2.10"}, {"upper", "prChannelUpper250_3_2.10"}, {"lower", "prChannelLower250_3_2.10"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 250.0}, {"degree", 3.0}, {"deviations", 2.15}}, {{"regression", "prChannel250_3_2.15"}, {"upper", "prChannelUpper250_3_2.15"}, {"lower", "prChannelLower250_3_2.15"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 250.0}, {"degree", 4.0}, {"deviations", 1.90}}, {{"regression", "prChannel250_4_1.90"}, {"upper", "prChannelUpper250_4_1.90"}, {"lower", "prChannelLower250_4_1.90"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 250.0}, {"degree", 4.0}, {"deviations", 1.95}}, {{"regression", "prChannel250_4_1.95"}, {"upper", "prChannelUpper250_4_1.95"}, {"lower", "prChannelLower250_4_1.95"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 250.0}, {"degree", 4.0}, {"deviations", 2.00}}, {{"regression", "prChannel250_4_2.00"}, {"upper", "prChannelUpper250_4_2.00"}, {"lower", "prChannelLower250_4_2.00"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 250.0}, {"degree", 4.0}, {"deviations", 2.05}}, {{"regression", "prChannel250_4_2.05"}, {"upper", "prChannelUpper250_4_2.05"}, {"lower", "prChannelLower250_4_2.05"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 250.0}, {"degree", 4.0}, {"deviations", 2.10}}, {{"regression", "prChannel250_4_2.10"}, {"upper", "prChannelUpper250_4_2.10"}, {"lower", "prChannelLower250_4_2.10"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 250.0}, {"degree", 4.0}, {"deviations", 2.15}}, {{"regression", "prChannel250_4_2.15"}, {"upper", "prChannelUpper250_4_2.15"}, {"lower", "prChannelLower250_4_2.15"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 250.0}, {"degree", 5.0}, {"deviations", 2.05}}, {{"regression", "prChannel250_5_2.05"}, {"upper", "prChannelUpper250_5_2.05"}, {"lower", "prChannelLower250_5_2.05"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 300.0}, {"degree", 2.0}, {"deviations", 1.90}}, {{"regression", "prChannel300_2_1.90"}, {"upper", "prChannelUpper300_2_1.90"}, {"lower", "prChannelLower300_2_1.90"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 300.0}, {"degree", 2.0}, {"deviations", 1.95}}, {{"regression", "prChannel300_2_1.95"}, {"upper", "prChannelUpper300_2_1.95"}, {"lower", "prChannelLower300_2_1.95"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 300.0}, {"degree", 2.0}, {"deviations", 2.00}}, {{"regression", "prChannel300_2_2.00"}, {"upper", "prChannelUpper300_2_2.00"}, {"lower", "prChannelLower300_2_2.00"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 300.0}, {"degree", 2.0}, {"deviations", 2.05}}, {{"regression", "prChannel300_2_2.05"}, {"upper", "prChannelUpper300_2_2.05"}, {"lower", "prChannelLower300_2_2.05"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 300.0}, {"degree", 2.0}, {"deviations", 2.10}}, {{"regression", "prChannel300_2_2.10"}, {"upper", "prChannelUpper300_2_2.10"}, {"lower", "prChannelLower300_2_2.10"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 300.0}, {"degree", 2.0}, {"deviations", 2.15}}, {{"regression", "prChannel300_2_2.15"}, {"upper", "prChannelUpper300_2_2.15"}, {"lower", "prChannelLower300_2_2.15"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 300.0}, {"degree", 3.0}, {"deviations", 1.90}}, {{"regression", "prChannel300_3_1.90"}, {"upper", "prChannelUpper300_3_1.90"}, {"lower", "prChannelLower300_3_1.90"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 300.0}, {"degree", 3.0}, {"deviations", 1.95}}, {{"regression", "prChannel300_3_1.95"}, {"upper", "prChannelUpper300_3_1.95"}, {"lower", "prChannelLower300_3_1.95"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 300.0}, {"degree", 3.0}, {"deviations", 2.00}}, {{"regression", "prChannel300_3_2.00"}, {"upper", "prChannelUpper300_3_2.00"}, {"lower", "prChannelLower300_3_2.00"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 300.0}, {"degree", 3.0}, {"deviations", 2.05}}, {{"regression", "prChannel300_3_2.05"}, {"upper", "prChannelUpper300_3_2.05"}, {"lower", "prChannelLower300_3_2.05"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 300.0}, {"degree", 3.0}, {"deviations", 2.10}}, {{"regression", "prChannel300_3_2.10"}, {"upper", "prChannelUpper300_3_2.10"}, {"lower", "prChannelLower300_3_2.10"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 300.0}, {"degree", 3.0}, {"deviations", 2.15}}, {{"regression", "prChannel300_3_2.15"}, {"upper", "prChannelUpper300_3_2.15"}, {"lower", "prChannelLower300_3_2.15"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 300.0}, {"degree", 4.0}, {"deviations", 1.90}}, {{"regression", "prChannel300_4_1.90"}, {"upper", "prChannelUpper300_4_1.90"}, {"lower", "prChannelLower300_4_1.90"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 300.0}, {"degree", 4.0}, {"deviations", 1.95}}, {{"regression", "prChannel300_4_1.95"}, {"upper", "prChannelUpper300_4_1.95"}, {"lower", "prChannelLower300_4_1.95"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 300.0}, {"degree", 4.0}, {"deviations", 2.00}}, {{"regression", "prChannel300_4_2.00"}, {"upper", "prChannelUpper300_4_2.00"}, {"lower", "prChannelLower300_4_2.00"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 300.0}, {"degree", 4.0}, {"deviations", 2.05}}, {{"regression", "prChannel300_4_2.05"}, {"upper", "prChannelUpper300_4_2.05"}, {"lower", "prChannelLower300_4_2.05"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 300.0}, {"degree", 4.0}, {"deviations", 2.10}}, {{"regression", "prChannel300_4_2.10"}, {"upper", "prChannelUpper300_4_2.10"}, {"lower", "prChannelLower300_4_2.10"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 300.0}, {"degree", 4.0}, {"deviations", 2.15}}, {{"regression", "prChannel300_4_2.15"}, {"upper", "prChannelUpper300_4_2.15"}, {"lower", "prChannelLower300_4_2.15"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 300.0}, {"degree", 5.0}, {"deviations", 2.05}}, {{"regression", "prChannel300_5_2.05"}, {"upper", "prChannelUpper300_5_2.05"}, {"lower", "prChannelLower300_5_2.05"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 350.0}, {"degree", 2.0}, {"deviations", 1.90}}, {{"regression", "prChannel350_2_1.90"}, {"upper", "prChannelUpper350_2_1.90"}, {"lower", "prChannelLower350_2_1.90"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 350.0}, {"degree", 2.0}, {"deviations", 1.95}}, {{"regression", "prChannel350_2_1.95"}, {"upper", "prChannelUpper350_2_1.95"}, {"lower", "prChannelLower350_2_1.95"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 350.0}, {"degree", 2.0}, {"deviations", 2.00}}, {{"regression", "prChannel350_2_2.00"}, {"upper", "prChannelUpper350_2_2.00"}, {"lower", "prChannelLower350_2_2.00"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 350.0}, {"degree", 2.0}, {"deviations", 2.05}}, {{"regression", "prChannel350_2_2.05"}, {"upper", "prChannelUpper350_2_2.05"}, {"lower", "prChannelLower350_2_2.05"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 350.0}, {"degree", 2.0}, {"deviations", 2.10}}, {{"regression", "prChannel350_2_2.10"}, {"upper", "prChannelUpper350_2_2.10"}, {"lower", "prChannelLower350_2_2.10"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 350.0}, {"degree", 2.0}, {"deviations", 2.15}}, {{"regression", "prChannel350_2_2.15"}, {"upper", "prChannelUpper350_2_2.15"}, {"lower", "prChannelLower350_2_2.15"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 350.0}, {"degree", 3.0}, {"deviations", 1.90}}, {{"regression", "prChannel350_3_1.90"}, {"upper", "prChannelUpper350_3_1.90"}, {"lower", "prChannelLower350_3_1.90"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 350.0}, {"degree", 3.0}, {"deviations", 1.95}}, {{"regression", "prChannel350_3_1.95"}, {"upper", "prChannelUpper350_3_1.95"}, {"lower", "prChannelLower350_3_1.95"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 350.0}, {"degree", 3.0}, {"deviations", 2.00}}, {{"regression", "prChannel350_3_2.00"}, {"upper", "prChannelUpper350_3_2.00"}, {"lower", "prChannelLower350_3_2.00"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 350.0}, {"degree", 3.0}, {"deviations", 2.05}}, {{"regression", "prChannel350_3_2.05"}, {"upper", "prChannelUpper350_3_2.05"}, {"lower", "prChannelLower350_3_2.05"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 350.0}, {"degree", 3.0}, {"deviations", 2.10}}, {{"regression", "prChannel350_3_2.10"}, {"upper", "prChannelUpper350_3_2.10"}, {"lower", "prChannelLower350_3_2.10"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 350.0}, {"degree", 3.0}, {"deviations", 2.15}}, {{"regression", "prChannel350_3_2.15"}, {"upper", "prChannelUpper350_3_2.15"}, {"lower", "prChannelLower350_3_2.15"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 350.0}, {"degree", 4.0}, {"deviations", 1.90}}, {{"regression", "prChannel350_4_1.90"}, {"upper", "prChannelUpper350_4_1.90"}, {"lower", "prChannelLower350_4_1.90"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 350.0}, {"degree", 4.0}, {"deviations", 1.95}}, {{"regression", "prChannel350_4_1.95"}, {"upper", "prChannelUpper350_4_1.95"}, {"lower", "prChannelLower350_4_1.95"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 350.0}, {"degree", 4.0}, {"deviations", 2.00}}, {{"regression", "prChannel350_4_2.00"}, {"upper", "prChannelUpper350_4_2.00"}, {"lower", "prChannelLower350_4_2.00"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 350.0}, {"degree", 4.0}, {"deviations", 2.05}}, {{"regression", "prChannel350_4_2.05"}, {"upper", "prChannelUpper350_4_2.05"}, {"lower", "prChannelLower350_4_2.05"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 350.0}, {"degree", 4.0}, {"deviations", 2.10}}, {{"regression", "prChannel350_4_2.10"}, {"upper", "prChannelUpper350_4_2.10"}, {"lower", "prChannelLower350_4_2.10"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 350.0}, {"degree", 4.0}, {"deviations", 2.15}}, {{"regression", "prChannel350_4_2.15"}, {"upper", "prChannelUpper350_4_2.15"}, {"lower", "prChannelLower350_4_2.15"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 350.0}, {"degree", 5.0}, {"deviations", 2.05}}, {{"regression", "prChannel350_5_2.05"}, {"upper", "prChannelUpper350_5_2.05"}, {"lower", "prChannelLower350_5_2.05"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 400.0}, {"degree", 2.0}, {"deviations", 1.90}}, {{"regression", "prChannel400_2_1.90"}, {"upper", "prChannelUpper400_2_1.90"}, {"lower", "prChannelLower400_2_1.90"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 400.0}, {"degree", 2.0}, {"deviations", 1.95}}, {{"regression", "prChannel400_2_1.95"}, {"upper", "prChannelUpper400_2_1.95"}, {"lower", "prChannelLower400_2_1.95"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 400.0}, {"degree", 2.0}, {"deviations", 2.00}}, {{"regression", "prChannel400_2_2.00"}, {"upper", "prChannelUpper400_2_2.00"}, {"lower", "prChannelLower400_2_2.00"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 400.0}, {"degree", 2.0}, {"deviations", 2.05}}, {{"regression", "prChannel400_2_2.05"}, {"upper", "prChannelUpper400_2_2.05"}, {"lower", "prChannelLower400_2_2.05"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 400.0}, {"degree", 2.0}, {"deviations", 2.10}}, {{"regression", "prChannel400_2_2.10"}, {"upper", "prChannelUpper400_2_2.10"}, {"lower", "prChannelLower400_2_2.10"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 400.0}, {"degree", 2.0}, {"deviations", 2.15}}, {{"regression", "prChannel400_2_2.15"}, {"upper", "prChannelUpper400_2_2.15"}, {"lower", "prChannelLower400_2_2.15"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 400.0}, {"degree", 3.0}, {"deviations", 1.90}}, {{"regression", "prChannel400_3_1.90"}, {"upper", "prChannelUpper400_3_1.90"}, {"lower", "prChannelLower400_3_1.90"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 400.0}, {"degree", 3.0}, {"deviations", 1.95}}, {{"regression", "prChannel400_3_1.95"}, {"upper", "prChannelUpper400_3_1.95"}, {"lower", "prChannelLower400_3_1.95"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 400.0}, {"degree", 3.0}, {"deviations", 2.00}}, {{"regression", "prChannel400_3_2.00"}, {"upper", "prChannelUpper400_3_2.00"}, {"lower", "prChannelLower400_3_2.00"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 400.0}, {"degree", 3.0}, {"deviations", 2.05}}, {{"regression", "prChannel400_3_2.05"}, {"upper", "prChannelUpper400_3_2.05"}, {"lower", "prChannelLower400_3_2.05"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 400.0}, {"degree", 3.0}, {"deviations", 2.10}}, {{"regression", "prChannel400_3_2.10"}, {"upper", "prChannelUpper400_3_2.10"}, {"lower", "prChannelLower400_3_2.10"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 400.0}, {"degree", 3.0}, {"deviations", 2.15}}, {{"regression", "prChannel400_3_2.15"}, {"upper", "prChannelUpper400_3_2.15"}, {"lower", "prChannelLower400_3_2.15"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 400.0}, {"degree", 4.0}, {"deviations", 1.90}}, {{"regression", "prChannel400_4_1.90"}, {"upper", "prChannelUpper400_4_1.90"}, {"lower", "prChannelLower400_4_1.90"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 400.0}, {"degree", 4.0}, {"deviations", 1.95}}, {{"regression", "prChannel400_4_1.95"}, {"upper", "prChannelUpper400_4_1.95"}, {"lower", "prChannelLower400_4_1.95"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 400.0}, {"degree", 4.0}, {"deviations", 2.00}}, {{"regression", "prChannel400_4_2.00"}, {"upper", "prChannelUpper400_4_2.00"}, {"lower", "prChannelLower400_4_2.00"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 400.0}, {"degree", 4.0}, {"deviations", 2.05}}, {{"regression", "prChannel400_4_2.05"}, {"upper", "prChannelUpper400_4_2.05"}, {"lower", "prChannelLower400_4_2.05"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 400.0}, {"degree", 4.0}, {"deviations", 2.10}}, {{"regression", "prChannel400_4_2.10"}, {"upper", "prChannelUpper400_4_2.10"}, {"lower", "prChannelLower400_4_2.10"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 400.0}, {"degree", 4.0}, {"deviations", 2.15}}, {{"regression", "prChannel400_4_2.15"}, {"upper", "prChannelUpper400_4_2.15"}, {"lower", "prChannelLower400_4_2.15"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 400.0}, {"degree", 5.0}, {"deviations", 2.05}}, {{"regression", "prChannel400_5_2.05"}, {"upper", "prChannelUpper400_5_2.05"}, {"lower", "prChannelLower400_5_2.05"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 450.0}, {"degree", 2.0}, {"deviations", 1.90}}, {{"regression", "prChannel450_2_1.90"}, {"upper", "prChannelUpper450_2_1.90"}, {"lower", "prChannelLower450_2_1.90"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 450.0}, {"degree", 2.0}, {"deviations", 1.95}}, {{"regression", "prChannel450_2_1.95"}, {"upper", "prChannelUpper450_2_1.95"}, {"lower", "prChannelLower450_2_1.95"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 450.0}, {"degree", 2.0}, {"deviations", 2.00}}, {{"regression", "prChannel450_2_2.00"}, {"upper", "prChannelUpper450_2_2.00"}, {"lower", "prChannelLower450_2_2.00"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 450.0}, {"degree", 2.0}, {"deviations", 2.05}}, {{"regression", "prChannel450_2_2.05"}, {"upper", "prChannelUpper450_2_2.05"}, {"lower", "prChannelLower450_2_2.05"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 450.0}, {"degree", 2.0}, {"deviations", 2.10}}, {{"regression", "prChannel450_2_2.10"}, {"upper", "prChannelUpper450_2_2.10"}, {"lower", "prChannelLower450_2_2.10"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 450.0}, {"degree", 2.0}, {"deviations", 2.15}}, {{"regression", "prChannel450_2_2.15"}, {"upper", "prChannelUpper450_2_2.15"}, {"lower", "prChannelLower450_2_2.15"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 450.0}, {"degree", 3.0}, {"deviations", 1.90}}, {{"regression", "prChannel450_3_1.90"}, {"upper", "prChannelUpper450_3_1.90"}, {"lower", "prChannelLower450_3_1.90"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 450.0}, {"degree", 3.0}, {"deviations", 1.95}}, {{"regression", "prChannel450_3_1.95"}, {"upper", "prChannelUpper450_3_1.95"}, {"lower", "prChannelLower450_3_1.95"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 450.0}, {"degree", 3.0}, {"deviations", 2.00}}, {{"regression", "prChannel450_3_2.00"}, {"upper", "prChannelUpper450_3_2.00"}, {"lower", "prChannelLower450_3_2.00"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 450.0}, {"degree", 3.0}, {"deviations", 2.05}}, {{"regression", "prChannel450_3_2.05"}, {"upper", "prChannelUpper450_3_2.05"}, {"lower", "prChannelLower450_3_2.05"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 450.0}, {"degree", 3.0}, {"deviations", 2.10}}, {{"regression", "prChannel450_3_2.10"}, {"upper", "prChannelUpper450_3_2.10"}, {"lower", "prChannelLower450_3_2.10"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 450.0}, {"degree", 3.0}, {"deviations", 2.15}}, {{"regression", "prChannel450_3_2.15"}, {"upper", "prChannelUpper450_3_2.15"}, {"lower", "prChannelLower450_3_2.15"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 450.0}, {"degree", 4.0}, {"deviations", 1.90}}, {{"regression", "prChannel450_4_1.90"}, {"upper", "prChannelUpper450_4_1.90"}, {"lower", "prChannelLower450_4_1.90"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 450.0}, {"degree", 4.0}, {"deviations", 1.95}}, {{"regression", "prChannel450_4_1.95"}, {"upper", "prChannelUpper450_4_1.95"}, {"lower", "prChannelLower450_4_1.95"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 450.0}, {"degree", 4.0}, {"deviations", 2.00}}, {{"regression", "prChannel450_4_2.00"}, {"upper", "prChannelUpper450_4_2.00"}, {"lower", "prChannelLower450_4_2.00"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 450.0}, {"degree", 4.0}, {"deviations", 2.05}}, {{"regression", "prChannel450_4_2.05"}, {"upper", "prChannelUpper450_4_2.05"}, {"lower", "prChannelLower450_4_2.05"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 450.0}, {"degree", 4.0}, {"deviations", 2.10}}, {{"regression", "prChannel450_4_2.10"}, {"upper", "prChannelUpper450_4_2.10"}, {"lower", "prChannelLower450_4_2.10"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 450.0}, {"degree", 4.0}, {"deviations", 2.15}}, {{"regression", "prChannel450_4_2.15"}, {"upper", "prChannelUpper450_4_2.15"}, {"lower", "prChannelLower450_4_2.15"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 450.0}, {"degree", 5.0}, {"deviations", 2.05}}, {{"regression", "prChannel450_5_2.05"}, {"upper", "prChannelUpper450_5_2.05"}, {"lower", "prChannelLower450_5_2.05"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 500.0}, {"degree", 2.0}, {"deviations", 1.90}}, {{"regression", "prChannel500_2_1.90"}, {"upper", "prChannelUpper500_2_1.90"}, {"lower", "prChannelLower500_2_1.90"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 500.0}, {"degree", 2.0}, {"deviations", 1.95}}, {{"regression", "prChannel500_2_1.95"}, {"upper", "prChannelUpper500_2_1.95"}, {"lower", "prChannelLower500_2_1.95"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 500.0}, {"degree", 2.0}, {"deviations", 2.00}}, {{"regression", "prChannel500_2_2.00"}, {"upper", "prChannelUpper500_2_2.00"}, {"lower", "prChannelLower500_2_2.00"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 500.0}, {"degree", 2.0}, {"deviations", 2.05}}, {{"regression", "prChannel500_2_2.05"}, {"upper", "prChannelUpper500_2_2.05"}, {"lower", "prChannelLower500_2_2.05"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 500.0}, {"degree", 2.0}, {"deviations", 2.10}}, {{"regression", "prChannel500_2_2.10"}, {"upper", "prChannelUpper500_2_2.10"}, {"lower", "prChannelLower500_2_2.10"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 500.0}, {"degree", 2.0}, {"deviations", 2.15}}, {{"regression", "prChannel500_2_2.15"}, {"upper", "prChannelUpper500_2_2.15"}, {"lower", "prChannelLower500_2_2.15"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 500.0}, {"degree", 3.0}, {"deviations", 1.90}}, {{"regression", "prChannel500_3_1.90"}, {"upper", "prChannelUpper500_3_1.90"}, {"lower", "prChannelLower500_3_1.90"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 500.0}, {"degree", 3.0}, {"deviations", 1.95}}, {{"regression", "prChannel500_3_1.95"}, {"upper", "prChannelUpper500_3_1.95"}, {"lower", "prChannelLower500_3_1.95"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 500.0}, {"degree", 3.0}, {"deviations", 2.00}}, {{"regression", "prChannel500_3_2.00"}, {"upper", "prChannelUpper500_3_2.00"}, {"lower", "prChannelLower500_3_2.00"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 500.0}, {"degree", 3.0}, {"deviations", 2.05}}, {{"regression", "prChannel500_3_2.05"}, {"upper", "prChannelUpper500_3_2.05"}, {"lower", "prChannelLower500_3_2.05"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 500.0}, {"degree", 3.0}, {"deviations", 2.10}}, {{"regression", "prChannel500_3_2.10"}, {"upper", "prChannelUpper500_3_2.10"}, {"lower", "prChannelLower500_3_2.10"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 500.0}, {"degree", 3.0}, {"deviations", 2.15}}, {{"regression", "prChannel500_3_2.15"}, {"upper", "prChannelUpper500_3_2.15"}, {"lower", "prChannelLower500_3_2.15"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 500.0}, {"degree", 4.0}, {"deviations", 1.90}}, {{"regression", "prChannel500_4_1.90"}, {"upper", "prChannelUpper500_4_1.90"}, {"lower", "prChannelLower500_4_1.90"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 500.0}, {"degree", 4.0}, {"deviations", 1.95}}, {{"regression", "prChannel500_4_1.95"}, {"upper", "prChannelUpper500_4_1.95"}, {"lower", "prChannelLower500_4_1.95"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 500.0}, {"degree", 4.0}, {"deviations", 2.00}}, {{"regression", "prChannel500_4_2.00"}, {"upper", "prChannelUpper500_4_2.00"}, {"lower", "prChannelLower500_4_2.00"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 500.0}, {"degree", 4.0}, {"deviations", 2.05}}, {{"regression", "prChannel500_4_2.05"}, {"upper", "prChannelUpper500_4_2.05"}, {"lower", "prChannelLower500_4_2.05"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 500.0}, {"degree", 4.0}, {"deviations", 2.10}}, {{"regression", "prChannel500_4_2.10"}, {"upper", "prChannelUpper500_4_2.10"}, {"lower", "prChannelLower500_4_2.10"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 500.0}, {"degree", 4.0}, {"deviations", 2.15}}, {{"regression", "prChannel500_4_2.15"}, {"upper", "prChannelUpper500_4_2.15"}, {"lower", "prChannelLower500_4_2.15"}}));
    this->studies.push_back(new PolynomialRegressionChannelStudy({{"length", 500.0}, {"degree", 5.0}, {"deviations", 2.05}}, {{"regression", "prChannel500_5_2.05"}, {"upper", "prChannelUpper500_5_2.05"}, {"lower", "prChannelLower500_5_2.05"}}));

    return this->studies;
}

std::map<std::string, std::vector<std::map<std::string, boost::variant<std::string, double>>>> *ReversalsOptimizer::getConfigurationOptions() {
    std::map<std::string, std::vector<std::map<std::string, boost::variant<std::string, double>>>> *configurationOptions = nullptr;

    // std::vector<ConfigurationOption*> ema200Options;
    // std::vector<ConfigurationOption*> ema100Options;
    // std::vector<ConfigurationOption*> ema50Options;
    // std::vector<ConfigurationOption*> sma13Options;
    // std::vector<ConfigurationOption*> rsiOptions;
    // std::vector<ConfigurationOption*> stochasticOptions;
    // std::vector<ConfigurationOption*> prChannelOptions;

    // // TODO: Solve problem where configurationOptions map need to store values of both strings and numbers.
    // rsiOptions.push_back(...);

    // configurationOptions["ema200"] = ema200Options;
    // configurationOptions["ema100"] = ema100Options;
    // configurationOptions["ema50"] = ema50Options;
    // configurationOptions["sma13"] = sma13Options;
    // configurationOptions["rsi"] = rsiOptions;
    // configurationOptions["stochastic"] = stochasticOptions;
    // configurationOptions["prChannel"] = prChannelOptions;

    return configurationOptions;
}
