#include "gam_grid.h"

namespace gam {
       /**
       * Grid for battleships game
       * 
       * @param columns number of grid columns
       * @param rows number of grid rows
       */
      gam_grid::gam_grid(int columns, int rows) :
      grid_columns(columns), grid_rows(rows) {

      }

      /**
       * Creates a new ship with random placement and orientation
       * 
       * @param size number of grid areas ship occupies
       */
      void gam_grid::new_ship(int size) {

      }

      /**
       * @return number of ships that are not sunk
       */
      int gam_grid::ships_left() {

      }

      /**
       * @return number of grid columns
       */
      int gam_grid::columns() {
        return grid_columns;
      }

      /**
       * @return number of grid rows
       */
      int gam_grid::rows() {
        return grid_rows;
      }
    }