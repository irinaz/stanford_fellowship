<?php
/**
 * @file
 * stanford_fellowship.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function stanford_fellowship_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'fellowship';
  $context->description = 'Context for Fellowship content type';
  $context->tag = 'Fellowship';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'stanford_fellowship' => 'stanford_fellowship',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Context for Fellowship content type');
  t('Fellowship');
  $export['fellowship'] = $context;

  return $export;
}
