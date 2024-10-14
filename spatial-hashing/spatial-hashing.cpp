#include "spatial-hashing.hpp"

SpatialHashGrid::SpatialHashGrid(boundary aGridBoundary,resolution aGridResolution)
{
    mGridBoundary = aGridBoundary;
    mGridResolution = aGridResolution;
};

client SpatialHashGrid::newClient(std::vector<double> aPosition, resolution aDimensions)
{
    client client = {aPosition,aDimensions,NULL};
    insert(client);
    return client;
};

void SpatialHashGrid::insert(client aClient)
{
    
};