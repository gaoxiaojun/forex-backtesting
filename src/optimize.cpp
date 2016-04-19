#include <string>
#include "optimizers/optimizer.h"
#include "factories/optimizerFactory.h"

int main(int argc, char *argv[]) {
    std::string optimizerName = "reversals";
    std::string symbol = "AUDJPY";
    int group = 1;
    Optimizer *optimizer = OptimizerFactory::create(optimizerName, symbol, group);

    // Prepare the data.
    optimizer->prepareStudies();

    return 0;
}
