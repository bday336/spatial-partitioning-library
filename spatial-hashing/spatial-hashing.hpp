#ifndef SPATIAL_HASHING_HPP
#define SPATIAL_HASHING_HPP

#include <vector>

// Container for boundary of hash grid, i.e.
// specify the lower and upper bounds of the region
// making up the grid
struct boundary
{
    std::vector<double> lower_bound;
    std::vector<double> upper_bound;
};

// Container for resolution information of the
// hash grid, i.e. how many cells are in considered
// in each direction of grid
struct resolution
{
    double x;   // Resolution in x direction
    double y;   // Resolution in y direction
};

// Container for client objects to be placed in the 
// hash grid
struct client
{
    std::vector<double> position;   // position of client
    resolution dimensions;          // number of cells client takes up in each direction
    int index;                   // index of the client
};




class SpatialHashGrid
{
    SpatialHashGrid(boundary aGridBoundary, resolution aGridResolution);

    client newClient(std::vector<double> aPosition, resolution aDimension);

    void insert(client aClient);
  /*
    _GetCellIndex(position) {
      const x = math.sat((position[0] - this._bounds[0][0]) / (
          this._bounds[1][0] - this._bounds[0][0]));
      const y = math.sat((position[1] - this._bounds[0][1]) / (
          this._bounds[1][1] - this._bounds[0][1]));
  
      const xIndex = Math.floor(x * (this._dimensions[0] - 1));
      const yIndex = Math.floor(y * (this._dimensions[1] - 1));
  
      return [xIndex, yIndex];
    }

    _Key(i1, i2) {
      return i1 + '.' + i2;
    }
  
    NewClient(position, dimensions) {
      const client = {
        position: position,
        dimensions: dimensions,
        indices: null,
      };
  
      this._Insert(client);
  
      return client;
    }
  
    UpdateClient(client) {
      this.Remove(client);
      this._Insert(client);
    }
  
    FindNear(position, bounds) {
      const [x, y] = position;
      const [w, h] = bounds;
  
      const i1 = this._GetCellIndex([x - w / 2, y - h / 2]);
      const i2 = this._GetCellIndex([x + w / 2, y + h / 2]);
  
      const clients = new Set();
  
      for (let x = i1[0], xn = i2[0]; x <= xn; ++x) {
        for (let y = i1[1], yn = i2[1]; y <= yn; ++y) {
          const k = this._Key(x, y);

          if (k in this._cells) {
            for (let v of this._cells[k]) {
              clients.add(v);
            }
          }
        }
      }
      return clients;
    }
  
    _Insert(client) {
      const [x, y] = client.position;
      const [w, h] = client.dimensions;
  
      const i1 = this._GetCellIndex([x - w / 2, y - h / 2]);
      const i2 = this._GetCellIndex([x + w / 2, y + h / 2]);
  
      client.indices = [i1, i2];
  
      for (let x = i1[0], xn = i2[0]; x <= xn; ++x) {
        for (let y = i1[1], yn = i2[1]; y <= yn; ++y) {
          const k = this._Key(x, y);
          if (!(k in this._cells)) {
            this._cells[k] = new Set();
          }
          this._cells[k].add(client);
        }
      }
    }
  
    Remove(client) {
      const [i1, i2] = client.indices;
  
      for (let x = i1[0], xn = i2[0]; x <= xn; ++x) {
        for (let y = i1[1], yn = i2[1]; y <= yn; ++y) {
          const k = this._Key(x, y);

          this._cells[k].delete(client);
        }
      }
    }
  }
  */

    boundary mGridBoundary;
    resolution mGridResolution;

};

#endif