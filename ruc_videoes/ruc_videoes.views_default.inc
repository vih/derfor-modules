<?php
/**
 * @file
 * ruc_videoes.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ruc_videoes_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'ruc_videoer';
  $view->description = 'Video page for RUC Derfor.';
  $view->tag = 'RUC';
  $view->base_table = 'node';
  $view->human_name = 'Videoer';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Videoer fra Roskilde Universitet';
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '7';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  /* Felt: Indhold: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  /* Felt: Indhold: Video thumbnail */
  $handler->display->display_options['fields']['field_ruc_video_thumb']['id'] = 'field_ruc_video_thumb';
  $handler->display->display_options['fields']['field_ruc_video_thumb']['table'] = 'field_data_field_ruc_video_thumb';
  $handler->display->display_options['fields']['field_ruc_video_thumb']['field'] = 'field_ruc_video_thumb';
  $handler->display->display_options['fields']['field_ruc_video_thumb']['label'] = '';
  $handler->display->display_options['fields']['field_ruc_video_thumb']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_ruc_video_thumb']['alter']['text'] = '<a href="node/[nid]">[field_ruc_video_thumb]</a>';
  $handler->display->display_options['fields']['field_ruc_video_thumb']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ruc_video_thumb']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ruc_video_thumb']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ruc_video_thumb']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ruc_video_thumb']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ruc_video_thumb']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ruc_video_thumb']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ruc_video_thumb']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ruc_video_thumb']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_ruc_video_thumb']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ruc_video_thumb']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ruc_video_thumb']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ruc_video_thumb']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ruc_video_thumb']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ruc_video_thumb']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ruc_video_thumb']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ruc_video_thumb']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_ruc_video_thumb']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ruc_video_thumb']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_ruc_video_thumb']['settings'] = array(
    'file_view_mode' => 'media_original',
  );
  $handler->display->display_options['fields']['field_ruc_video_thumb']['field_api_classes'] = 0;
  /* Sorteringskriterie: Indhold: Titel */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ruc_video' => 'ruc_video',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'videoer';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Vidoer';
  $handler->display->display_options['menu']['weight'] = '50';
  $handler->display->display_options['menu']['context'] = 0;
  $translatables['ruc_videoer'] = array(
    t('Master'),
    t('Videoer fra Roskilde Universitet'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Antal elementer'),
    t('- Alle -'),
    t('Forskydning'),
    t('<a href="node/[nid]">[field_ruc_video_thumb]</a>'),
    t('Page'),
  );
  $export['ruc_videoer'] = $view;

  return $export;
}
