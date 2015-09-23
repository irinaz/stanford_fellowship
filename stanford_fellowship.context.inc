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
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'ds_extras-fellowship_important_dates' => array(
          'module' => 'ds_extras',
          'delta' => 'fellowship_important_dates',
          'region' => 'content',
          'weight' => '-10',
        ),
        'ds_extras-eligibility' => array(
          'module' => 'ds_extras',
          'delta' => 'eligibility',
          'region' => 'content',
          'weight' => '1',
        ),
        'ds_extras-application' => array(
          'module' => 'ds_extras',
          'delta' => 'application',
          'region' => 'content',
          'weight' => '2',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Context for Fellowship content type');
  t('Fellowship');
  $export['fellowship'] = $context;

  return $export;
}
