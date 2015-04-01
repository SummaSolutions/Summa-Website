<?php
/**
 * @file
 * revamp.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function revamp_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-summa-options_application-development:services/application-development
  $menu_links['menu-summa-options_application-development:services/application-development'] = array(
    'menu_name' => 'menu-summa-options',
    'link_path' => 'services/application-development',
    'router_path' => 'services/application-development',
    'link_title' => 'Application Development',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-summa-options_application-development:services/application-development',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'menu-summa-options_services:services',
  );
  // Exported menu link: menu-summa-options_blog:blogposts
  $menu_links['menu-summa-options_blog:blogposts'] = array(
    'menu_name' => 'menu-summa-options',
    'link_path' => 'blogposts',
    'router_path' => 'blogposts',
    'link_title' => 'Blog',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-summa-options_blog:blogposts',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-summa-options_careers:company/careers
  $menu_links['menu-summa-options_careers:company/careers'] = array(
    'menu_name' => 'menu-summa-options',
    'link_path' => 'company/careers',
    'router_path' => 'company/careers',
    'link_title' => 'Careers',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-summa-options_careers:company/careers',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
    'parent_identifier' => 'menu-summa-options_company:company',
  );
  // Exported menu link: menu-summa-options_case-studies:case-studies
  $menu_links['menu-summa-options_case-studies:case-studies'] = array(
    'menu_name' => 'menu-summa-options',
    'link_path' => 'case-studies',
    'router_path' => 'case-studies',
    'link_title' => 'Case Studies',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-summa-options_case-studies:case-studies',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-summa-options_clients:company/clients
  $menu_links['menu-summa-options_clients:company/clients'] = array(
    'menu_name' => 'menu-summa-options',
    'link_path' => 'company/clients',
    'router_path' => 'company/clients',
    'link_title' => 'Clients',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-summa-options_clients:company/clients',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'menu-summa-options_company:company',
  );
  // Exported menu link: menu-summa-options_cms:services/cms
  $menu_links['menu-summa-options_cms:services/cms'] = array(
    'menu_name' => 'menu-summa-options',
    'link_path' => 'services/cms',
    'router_path' => 'services/cms',
    'link_title' => 'CMS',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-summa-options_cms:services/cms',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'menu-summa-options_services:services',
  );
  // Exported menu link: menu-summa-options_company:company
  $menu_links['menu-summa-options_company:company'] = array(
    'menu_name' => 'menu-summa-options',
    'link_path' => 'company',
    'router_path' => 'company',
    'link_title' => 'Company',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-summa-options_company:company',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-summa-options_contact:contact
  $menu_links['menu-summa-options_contact:contact'] = array(
    'menu_name' => 'menu-summa-options',
    'link_path' => 'contact',
    'router_path' => 'contact',
    'link_title' => 'Contact',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-summa-options_contact:contact',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: menu-summa-options_e-commerce:services/ecommerce
  $menu_links['menu-summa-options_e-commerce:services/ecommerce'] = array(
    'menu_name' => 'menu-summa-options',
    'link_path' => 'services/ecommerce',
    'router_path' => 'services/ecommerce',
    'link_title' => 'E-commerce',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-summa-options_e-commerce:services/ecommerce',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'menu-summa-options_services:services',
  );
  // Exported menu link: menu-summa-options_home:<front>
  $menu_links['menu-summa-options_home:<front>'] = array(
    'menu_name' => 'menu-summa-options',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-summa-options_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-summa-options_manifesto:manifesto
  $menu_links['menu-summa-options_manifesto:manifesto'] = array(
    'menu_name' => 'menu-summa-options',
    'link_path' => 'manifesto',
    'router_path' => 'manifesto',
    'link_title' => 'Manifesto',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-summa-options_manifesto:manifesto',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'menu-summa-options_company:company',
  );
  // Exported menu link: menu-summa-options_partners:company/partners
  $menu_links['menu-summa-options_partners:company/partners'] = array(
    'menu_name' => 'menu-summa-options',
    'link_path' => 'company/partners',
    'router_path' => 'company/partners',
    'link_title' => 'Partners',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-summa-options_partners:company/partners',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'menu-summa-options_company:company',
  );
  // Exported menu link: menu-summa-options_services:services
  $menu_links['menu-summa-options_services:services'] = array(
    'menu_name' => 'menu-summa-options',
    'link_path' => 'services',
    'router_path' => 'services',
    'link_title' => 'Services',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-summa-options_services:services',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-summa-options_team:company/team
  $menu_links['menu-summa-options_team:company/team'] = array(
    'menu_name' => 'menu-summa-options',
    'link_path' => 'company/team',
    'router_path' => 'company/team',
    'link_title' => 'Team',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-summa-options_team:company/team',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'menu-summa-options_company:company',
  );
  // Exported menu link: menu-summa-options_vision-mission-and-history:company/vision-and-mission
  $menu_links['menu-summa-options_vision-mission-and-history:company/vision-and-mission'] = array(
    'menu_name' => 'menu-summa-options',
    'link_path' => 'company/vision-and-mission',
    'router_path' => 'company/vision-and-mission',
    'link_title' => 'Vision, Mission and History',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-summa-options_vision-mission-and-history:company/vision-and-mission',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'menu-summa-options_company:company',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Application Development');
  t('Blog');
  t('CMS');
  t('Careers');
  t('Case Studies');
  t('Clients');
  t('Company');
  t('Contact');
  t('E-commerce');
  t('Home');
  t('Manifesto');
  t('Partners');
  t('Services');
  t('Team');
  t('Vision, Mission and History');


  return $menu_links;
}
