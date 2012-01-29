<?php

/**
 * Plugin definition.
 */
$plugin = array(
  'title' => t('Commerce product subform'),
  'description' => t('Commerce product form element, as subform.'),
  'category' => t('Shopnet'),
  'required context' => new ctools_context_required(t('Product node'), 'node'), array(
    'form' => array('form'),
    'type' => array('product'),
  ),
);

/**
 * Render callback.
 */
function shopnet_product_commerce_product_subform_content_type_render($subtype, $conf, $args, $context) {
  if (empty($context) || empty($context->form)) {
    return;
  }

  $module = 'shopnet_product';
  $block = new stdClass();
  $block->module = $module;
  $block->content = $context->form['commerce_product_subform'];
  unset($context->form['commerce_product_subform']);
  return $block;
}

/**
 * Form callback.
 */
function  shopnet_product_commerce_product_subform_content_type_edit_form($form, &$form_state) {
  // provide a blank form so we have a place to have context setting.
  return $form;
}
