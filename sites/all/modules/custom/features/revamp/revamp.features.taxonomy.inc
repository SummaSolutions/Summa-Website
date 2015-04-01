<?php
/**
 * @file
 * revamp.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function revamp_taxonomy_default_vocabularies() {
  return array(
    'servicios' => array(
      'name' => 'Servicios',
      'machine_name' => 'servicios',
      'description' => 'Services provided by Summa',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
