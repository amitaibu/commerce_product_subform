<?php
/**
 * @file
 * commerce_product_subform.features.inc
 */

/**
 * Implements hook_node_info().
 */
function commerce_product_subform_node_info() {
  $items = array(
    'product' => array(
      'name' => t('Product'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
