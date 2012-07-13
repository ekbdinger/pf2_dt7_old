<?php
/**
 * @file
 * d7pf_security_att_all.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function d7pf_security_att_all_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'security_att_all';
  $view->description = '';
  $view->tag = 'd7';
  $view->base_table = 'node';
  $view->human_name = 'All Security Attributes';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'All Security Attributes';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '#';
  $handler->display->display_options['fields']['counter']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['counter']['alter']['text'] = '<strong>[counter])</strong>';
  $handler->display->display_options['fields']['counter']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['external'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['counter']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['counter']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['html'] = 0;
  $handler->display->display_options['fields']['counter']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['counter']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['counter']['hide_empty'] = 0;
  $handler->display->display_options['fields']['counter']['empty_zero'] = 0;
  $handler->display->display_options['fields']['counter']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Field: Content: Security Roles */
  $handler->display->display_options['fields']['taxonomy_vocabulary_7']['id'] = 'taxonomy_vocabulary_7';
  $handler->display->display_options['fields']['taxonomy_vocabulary_7']['table'] = 'field_data_taxonomy_vocabulary_7';
  $handler->display->display_options['fields']['taxonomy_vocabulary_7']['field'] = 'taxonomy_vocabulary_7';
  $handler->display->display_options['fields']['taxonomy_vocabulary_7']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['taxonomy_vocabulary_7']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['taxonomy_vocabulary_7']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['taxonomy_vocabulary_7']['alter']['external'] = 0;
  $handler->display->display_options['fields']['taxonomy_vocabulary_7']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['taxonomy_vocabulary_7']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['taxonomy_vocabulary_7']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['taxonomy_vocabulary_7']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['taxonomy_vocabulary_7']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['taxonomy_vocabulary_7']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['taxonomy_vocabulary_7']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['taxonomy_vocabulary_7']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['taxonomy_vocabulary_7']['alter']['html'] = 0;
  $handler->display->display_options['fields']['taxonomy_vocabulary_7']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['taxonomy_vocabulary_7']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['taxonomy_vocabulary_7']['hide_empty'] = 0;
  $handler->display->display_options['fields']['taxonomy_vocabulary_7']['empty_zero'] = 0;
  $handler->display->display_options['fields']['taxonomy_vocabulary_7']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['taxonomy_vocabulary_7']['group_rows'] = 1;
  $handler->display->display_options['fields']['taxonomy_vocabulary_7']['delta_offset'] = '0';
  $handler->display->display_options['fields']['taxonomy_vocabulary_7']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['taxonomy_vocabulary_7']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['taxonomy_vocabulary_7']['field_api_classes'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'security_attribute' => 'security_attribute',
  );
  /* Filter criterion: Content: PP (taxonomy_vocabulary_3) */
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['id'] = 'taxonomy_vocabulary_3_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['table'] = 'field_data_taxonomy_vocabulary_3';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['field'] = 'taxonomy_vocabulary_3_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['value'] = '';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['expose']['operator_id'] = 'taxonomy_vocabulary_3_tid_op';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['expose']['label'] = 'PP (taxonomy_vocabulary_3)';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['expose']['operator'] = 'taxonomy_vocabulary_3_tid_op';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['expose']['identifier'] = 'taxonomy_vocabulary_3_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['expose']['multiple'] = 1;
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['vocabulary'] = 'vocabulary_3';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['error_message'] = 1;
  /* Filter criterion: Content: Security Roles (taxonomy_vocabulary_7) */
  $handler->display->display_options['filters']['taxonomy_vocabulary_7_tid']['id'] = 'taxonomy_vocabulary_7_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_7_tid']['table'] = 'field_data_taxonomy_vocabulary_7';
  $handler->display->display_options['filters']['taxonomy_vocabulary_7_tid']['field'] = 'taxonomy_vocabulary_7_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_7_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['taxonomy_vocabulary_7_tid']['expose']['operator_id'] = 'taxonomy_vocabulary_7_tid_op';
  $handler->display->display_options['filters']['taxonomy_vocabulary_7_tid']['expose']['label'] = 'Security Roles (taxonomy_vocabulary_7)';
  $handler->display->display_options['filters']['taxonomy_vocabulary_7_tid']['expose']['operator'] = 'taxonomy_vocabulary_7_tid_op';
  $handler->display->display_options['filters']['taxonomy_vocabulary_7_tid']['expose']['identifier'] = 'taxonomy_vocabulary_7_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_7_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['taxonomy_vocabulary_7_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['taxonomy_vocabulary_7_tid']['type'] = 'select';
  $handler->display->display_options['filters']['taxonomy_vocabulary_7_tid']['vocabulary'] = 'vocabulary_7';
  $handler->display->display_options['filters']['taxonomy_vocabulary_7_tid']['error_message'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'security-att-all';
  $export['security_att_all'] = $view;

  return $export;
}
