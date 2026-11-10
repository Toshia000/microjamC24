#include "gam_selector.h"
#include <bn_keypad.h>

namespace gam {
  /**
   * Constructor for a grid area selector
   * 
   * @param grid_column selector's column position on the grid
   * @param grid_row selector's row position on the grid
   */
  gam_selector::gam_selector(int grid_column, int grid_row) : grid_column(grid_column), grid_row(grid_row) {

  };

  /**
   * Checks player's input for movement and fire
   */
  void gam_selector::update() {
    if (bn::keypad::left_held()) {
      grid_column--;
    }
    if (bn::keypad::right_held()) {
      grid_column++;
    }
    if (bn::keypad::up_held()) {
      grid_row++;
    }
    if (bn::keypad::down_held()) {
      grid_row--;
    }
    if (bn::keypad::a_pressed()) {
      fire();
    }
  }

  /**
   * Fires at ship at selector's location
   */
  void gam_selector::fire() {

  }

  /**
   * @return selector's column position on the grid
   */
  int gam_selector::column() {
    return grid_column;
  }

  /**
   * @return selector's row position on the grid
   */
  int gam_selector::row() {
    return grid_row;
  }
}