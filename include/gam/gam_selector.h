#pragma once

namespace gam {
  class gam_selector {
    public:
      /**
       * Constructor for a grid area selector
       * 
       * @param grid_column selector's column position on the grid
       * @param grid_row selector's row position on the grid
       */
      gam_selector(int grid_column, int grid_row);

      /**
       * Checks player's input for movement and fire
       */
      void update();

      /**
       * Fires at ship at selector's location
       */
      void fire();

      /**
       * @return selector's column position on the grid
       */
      int column();
      
      /**
       * @return selector's row position on the grid
       */
      int row();

    private:
      int grid_column;
      int grid_row;
  };
}